// Copyright (c) 2017 The Genex Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef genex_RPC_RAWTRANSACTION_H
#define genex_RPC_RAWTRANSACTION_H

class CBasicKeyStore;
struct CMutableTransaction;
class UniValue;

/** Sign a transaction with the given keystore and previous transactions */
UniValue SignTransaction(CMutableTransaction& mtx, const UniValue& prevTxs, CBasicKeyStore *keystore, bool tempKeystore, const UniValue& hashType);

#endif // genex_RPC_RAWTRANSACTION_H
