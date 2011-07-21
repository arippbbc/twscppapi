#ifndef contracts_h
#define contracts_h

#include "Contract.h"
#include "IBString.h"

struct FXContract: public Contract{
    public:
        FXContract(IBString sym = "EUR", IBString cur = "USD"){symbol=sym;secType="CASH";exchange="IDEALPRO";currency=cur;}
};

struct STKContract: public Contract{
    public:
       STKContract(IBString sym = "AAPL"){symbol=sym; secType="STK"; exchange="SMART"; currency="USD";}
};

#endif
