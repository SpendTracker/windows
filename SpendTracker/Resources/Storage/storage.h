#pragma once

#include "storageload.h"
#include "storagesave.h"

#include <vector>

#ifndef SPENDTRACKER_STORAGE_H
#define SPENDTRACKER_STORAGE_H

class Storage {
public:
    Storage();
    virtual ~Storage();

    std::map<std::string, Account> load();
    std::string save(std::map<std::string, Account> allData);

private:
    StorageLoad storageLoad;
    StorageSave storageSave;
};


#endif //SPENDTRACKER_STORAGE_H