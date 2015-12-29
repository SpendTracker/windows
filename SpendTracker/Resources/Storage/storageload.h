#pragma once

#include "account/account.h"

#include <fstream>
#include <string>
#include <vector>

#ifndef SPENDTRACKER_STORAGELOAD_H
#define SPENDTRACKER_STORAGELOAD_H

class StorageLoad {
public:
    StorageLoad();
    virtual ~StorageLoad();

    std::map<std::string, Account> execute();
};


#endif //SPENDTRACKER_STORAGELOAD_H