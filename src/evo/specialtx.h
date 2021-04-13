    // Copyright (c) 2017 The Dash Core developers
// Copyright (c) 2020 The fls Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef fls_SPECIALTX_H
#define fls_SPECIALTX_H

#include "streams.h"
#include "version.h"
#include "primitives/transaction.h"

class CBlock;
class CBlockIndex;
class CValidationState;
class uint256;

/** The maximum allowed size of the extraPayload (for any TxType) */
static const unsigned int MAX_SPECIALTX_EXTRAPAYLOAD = 10000;

/** Payload validity checks (including duplicate unique properties against list at pindexPrev)*/
// Note: for +v2, if the tx is not a special tx, this method returns true.
// Note2: This function only performs extra payload related checks, it does NOT checks regular inputs and outputs.
bool CheckSpecialTx(const CTransaction& tx, const CBlockIndex* pindexPrev, CValidationState& state);

// Basic non-contextual checks for special txes
// Note: for +v2, if the tx is not a special tx, this method returns true.
bool CheckSpecialTxNoContext(const CTransaction& tx, CValidationState& state);

// Update internal tiertwo data when blocks containing special txes get connected/disconnected
bool ProcessSpecialTxsInBlock(const CBlock& block, const CBlockIndex* pindex, CValidationState& state, bool fJustCheck);
bool UndoSpecialTxsInBlock(const CBlock& block, const CBlockIndex* pindexPrev);

#endif // fls_SPECIALTX_H
