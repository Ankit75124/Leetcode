class Solution {
public:
    int romanToInt(string s) {
        int n=0;
        int sum=0;
        
        for(n=0;n<s.length();n++)
        {                                            //  VI
            if(s[n]=='I'){   //1
                if(s[n+1]=='X'){   //9
                        n++;
                        sum+=9;
                    }
                else if(s[n+1]=='V')
                {
                    n++;
                    sum +=4;   //4  IV
                }
                else{
                    sum+=1;
                }
                }     
                    
            else if(s[n]=='V'){
                sum+=5; 
            }
            else if(s[n]=='X'){   
                if(s[n+1]=='L'){   
                        n++;
                        sum+=40;
                    }
                else if(s[n+1]=='C')
                {
                    n++;
                    sum +=90;   
                }
                else{
                    sum+=10;
                }
            }
            else if(s[n]=='L'){
                sum+=50; 
            }
            
            
            else if(s[n]=='C'){   
                if(s[n+1]=='D'){   
                        n++;
                        sum+=400;
                    }
                else if(s[n+1]=='M')
                {
                    n++;
                    sum +=900;   
                }
                else{
                    sum+=100;
                }
            }
            else if(s[n]=='D'){
                sum+=500; 
            }
            else if(s[n]=='M'){
                sum+=1000; 
            }
            
            else{
                return 0;
            }
               
      }
        
        return sum;
    }
};
