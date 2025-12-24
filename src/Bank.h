#pragma once
#include <vector>
#include "Account.h"

class Bank {
public:
    std::vector<Account> accounts;

    // Метод для создания аккаунта
    void createAccount(int id, std::string name, double initial) {
        accounts.emplace_back(id, name, initial);
    }

    // Метод для поиска аккаунта по ID (возвращает указатель)
    Account* getAccount(int id) {
        for (auto& acc : accounts) {
            if (acc.getId() == id) {
                return &acc;
            }
        }
        return nullptr; // Если не найден
    }
};