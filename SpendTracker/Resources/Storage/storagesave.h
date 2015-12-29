#pragma once

#include <fstream>
#include <string>
#include <vector>
#include "account/account.h"

#ifndef SPENDTRACKER_STORAGESAVE_H
#define SPENDTRACKER_STORAGESAVE_H


class StorageSave {
public:
    StorageSave();
    virtual ~StorageSave();

    std::string execute(std::map<std::string, Account> allData);
};

#endif //SPENDTRACKER_STORAGESAVE_H