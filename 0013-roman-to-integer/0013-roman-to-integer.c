
int romanToInt(char * s)
{
int function(char x)
    {
        switch(x)
        {
            case 'M':
            return 1000;
            break;

             case 'D':
            return 500;
            break;

            case 'C':
            return 100;
            break;

             case 'L':
            return 50;
            break;

             case 'X':
            return 10;
            break;

             case 'V':
            return 5;
            break;

            case 'I':
            return 1;
            break;
            default :
            return -1;
        }
    }
    int len=strlen(s);
    int sum=0;
   for(int i=0;i<len;i++){
       if(function(s[i]) < function(s[i+1])){
       sum -= function(s[i]);
   }
   else{
   sum+=function(s[i]);
   }
   }
    return sum;
}