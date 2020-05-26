#pragma once

int NWD(int lhs, int rhs) {
    if (lhs == 0) {
        return rhs;
    }
    if (rhs == 0) {
        return lhs;
    }
    if (lhs < rhs) {
        std::swap(lhs,rhs);
    }
    while(lhs % rhs != 0) {
        int temp = lhs;
        lhs = rhs;
        rhs = temp % rhs;
    }
    return (rhs > 0) ? rhs: -rhs;
}

int NWW(int lhs, int rhs) {
    if (NWD(lhs, rhs) != 0) {
        if (lhs * rhs > 0) {
            return (lhs * rhs)/(NWD(lhs, rhs));
        }
        return -(lhs * rhs)/(NWD(lhs, rhs));
        
    }
    return 0;
    
}
