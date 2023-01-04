class Solution {
public:
    bool squareIsWhite(string coordinates) 
    {
        if(coordinates[0] == 'a' || coordinates[0] == 'c' || 
           coordinates[0] == 'e' || coordinates[0] == 'g')
        {
            return !(coordinates[1]  % 2);
        }
        else
        {
            return (coordinates[1]  % 2);
        }
        return false;
    }
};
