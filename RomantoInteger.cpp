class Solution {
public:
//unordered_map kullanılıyor çünkü mape göre daha hızlı ve sıralamanın önemi yok. 
    int romanToInt(string s) {
       std::unordered_map<char, int> map
       {
           {'I',1},
           {'V',5},
           {'X',10},
           {'L',50},
           {'C',100},
           {'D',500},
           {'M',1000}
       };
        long int ans = 0;
        for(int i = 0;i<s.size();i++)
        {  
            if((map[s[i]] > map[s[i+1]]))
            {
                /*int current_Val = map.find(s[i])->second;
                int next_Val = 0;
               if(s[i + 1] != 0)  next_Val = map.find(s[i + 1])->second;

                if(current_Val >= next_Val)
                {   
                    ans += current_Val;
                }
                else
                {
                    ans += next_Val-current_Val;
                    i++;
                }*/
                ans += map.find(s[i])->second;
            }
            else{
                ans += map.find(s[i+1])->second - map.find(s[i])->second;
                continue;
                //i++;
            }
        }
        return ans; 
    }
};
