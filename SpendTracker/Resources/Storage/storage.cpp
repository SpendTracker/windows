#include "storage.h"

Storage::Storage() {
    // TODO Auto-generated constructor stub

}

Storage::~Storage() {
    // TODO Auto-generated destructor stub
}

std::map<std::string, Account> Storage::load() {
    return storageLoad.execute();
}

std::string Storage::save(std::map<std::string, Account> allData) {
    return storageSave.execute(allData);
}