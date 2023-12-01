#ifndef DEALEROFFICE_H
#define DEALEROFFICE_H

#include "PackageDTO.h"

class DealerOffice {
public:
    PackageDTO createPackageDTO() {
        return PackageDTO("Dealer", "Customer", "Information about the product");
    }
};

#endif 

