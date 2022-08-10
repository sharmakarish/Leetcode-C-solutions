class Solution {
public:
    int myAtoi(string str) {
        int res=0;
        bool is_positive = true;
        int i=0;
        
        while (str[i] == ' ') // count leading spaces
            i++;
        
        if (str[i] == '-') // check sign
        {
            is_positive = false;
            i++;
        }
        else if (str[i] == '+')
        {
            is_positive = true;
            i++;
        }
        str.erase(0,i); // remove leading spaces and sign
        
        for (int i=0;i<str.size();i++)
        {
            if (isdigit(str[i]))
            {
                int value = str[i] - '0';
                
                if ((res > (INT_MAX - value)/10) && (is_positive))
                    return INT_MAX;
                if ((res > (INT_MAX - value)/10) && (!is_positive))
                    return INT_MIN;

                (res*=10) += value;
            }
            else // no more digits
                break;
        }
        
        if (!is_positive)
            return -res;
        return res;
    }
};