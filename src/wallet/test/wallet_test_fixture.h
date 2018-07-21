// Copyright (c) 2016-2017 The Genex Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef genex_WALLET_TEST_WALLET_TEST_FIXTURE_H
#define genex_WALLET_TEST_WALLET_TEST_FIXTURE_H

#include <test/test_genex.h>

#include <wallet/wallet.h>

#include <memory>

/** Testing setup and teardown for wallet.
 */
struct WalletTestingSetup: public TestingSetup {
    explicit WalletTestingSetup(const std::string& chainName = CBaseChainParams::MAIN);
    ~WalletTestingSetup();

    CWallet m_wallet;
};

#endif // genex_WALLET_TEST_WALLET_TEST_FIXTURE_H
