class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if( ((int)coordinates.at(0) + coordinates.at(1))%2 ==0) return false;
        else return true;

    }
};
