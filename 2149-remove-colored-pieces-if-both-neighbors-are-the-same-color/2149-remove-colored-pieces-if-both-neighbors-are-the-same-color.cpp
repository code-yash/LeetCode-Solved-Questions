class Solution {
public:
    bool winnerOfGame(string colors) {

        int n = colors.size();

        if(n <= 2)
            return false;

        int alice = 0;
        int bob = 0;

        for(int i=1; i<n; i++){
            if(colors[i-1] == colors[i] && colors[i+1] == colors[i] && colors[i] == 'A')
                alice++;

            else if(colors[i-1] == colors[i] && colors[i+1] == colors[i] && colors[i] == 'B')
                bob++;
        }

        if(alice == bob)
            return false;
        return (alice>bob)?true:false;
        
    }
};