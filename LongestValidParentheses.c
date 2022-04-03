

int longestValidParentheses(char * s)
{
    int op=0,cp=0;
   for (int i = 0; s[i]!='\0'; i++)
   {
       if(s[i]='(')
           op++;
       
       else
           cp++;
          
   }
    return cp;
}
