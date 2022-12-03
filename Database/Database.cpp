#include "Database.h"

Database::Database()
{
    this->listDonorUsers = std::vector<Donor>();
    this->listReceiverUsers = std::vector<Receiver>();
    this->listSolidResidues = std::vector<Solid>();
    this->listLiquidResidues = std::vector<Liquid>();
}

int Database::searchItem(Donor donor)
{
    for (int i = 0; i < this->listDonorUsers.size(); i++)
    {
        if (this->listDonorUsers[i].getId() == donor.getId())
        {
            return i;
        }
    }

    return -1;
}
int Database::searchItem(Receiver receiver)
{
    for (int i = 0; i < this->listReceiverUsers.size(); i++)
    {
        if (this->listDonorUsers[i].getId() == receiver.getId())
        {
            return i;
        }
    }

    return -1;
}
int Database::searchItem(Solid solid)
{
    for (int i = 0; i < this->listSolidResidues.size(); i++)
    {
        if (this->listDonorUsers[i].getId() == solid.getId())
        {
            return i;
        }
    }

    return -1;
}
int Database::searchItem(Liquid liquid)
{
    for (int i = 0; i < this->listLiquidResidues.size(); i++)
    {
        if (this->listDonorUsers[i].getId() == liquid.getId())
        {
            return i;
        }
    }

    return -1;
}

void Database::createItem(const Donor &donor)
{
    this->listDonorUsers.push_back(donor);
}

void Database::createItem(const Receiver &receiver)
{
    this->listReceiverUsers.push_back(receiver);
}

void Database::createItem(const Solid &solid)
{
    this->listSolidResidues.push_back(solid);
}

void Database::createItem(const Liquid &liquid)
{
    this->listLiquidResidues.push_back(liquid);
}

const std::vector<Donor> &Database::readDonorUsers()
{
    return this->listDonorUsers;
}

const std::vector<Receiver> &Database::readReceiverUsers()
{
    return this->listReceiverUsers;
}

const std::vector<Solid> &Database::readSolidResidues()
{
    return this->listSolidResidues;
}

const std::vector<Liquid> &Database::readLiquidResidues()
{
    return this->listLiquidResidues;
}

void Database::updateItem(const Donor &donor)
{
    int i = this->searchItem(donor);
    this->listDonorUsers[i] = donor;
}
void Database::updateItem(const Receiver &receiver)
{
    int i = this->searchItem(receiver);
    this->listReceiverUsers[i] = receiver;
}
void Database::updateItem(const Solid &solid)
{
    int i = this->searchItem(solid);
    this->listSolidResidues[i] = solid;
}
void Database::updateItem(const Liquid &liquid)
{
    int i = this->searchItem(liquid);
    this->listLiquidResidues[i] = liquid;
}

Database::~Database()
{
}