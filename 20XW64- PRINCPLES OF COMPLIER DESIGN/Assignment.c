/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int failState (int s)
{   
 
  if (s > 0 and s < 40)
    {
      return 41;
    }
  else
    {
      cout << "Not Yet Updated";
      return 0;
    }
}


int main ()
{
  char keywords[8];
  cout<<"Enter the Word:";
  cin>>keywords;
  int state = 0;
  int i = 0;
  while (1)
    {
      switch (state)
	{
	case 0:
	  if (keywords[i] == 'i' || keywords[i] == 'w' || keywords[i] == 'f'
	      || keywords[i] == 'a' || keywords[i] == '_'
	      || isalpha (keywords[i]) || keywords[i] == '<'
	      || keywords[i] == '>' || keywords[i] == '!'
	      || keywords[i] == '=' || isdigit(keywords[i]) 
	      || keywords[i]=='+'|| keywords[i]=='-' 
	      )
	    {
	      if (keywords[i] == 'w')
		{
		  state = 9;
		  i++;
		  break;
		}
	      if (keywords[i] == 'f')
		{
		  
		  state = 17;
		  i++;
		  break;
		}
	      if (keywords[i] == 'a')
		{
		  state = 26;
		  i++;
		  break;
		}
	      if (keywords[i] == '_' || isalpha (keywords[i]))
		{
		  state = 41;
		  i++;
		  break;
		}
	      if (keywords[i] == '=')
		{
            state=43;
            i++;
            break;
            
		}
        
          if (keywords[i] == '!')
		{
            state=45;
            i++;
            break;
            
		}
        
          if (keywords[i] == '>')
		{
            state=46;
            i++;
            break;
		}
		
		if(keywords[i] =='<')
		{
		  state=46;
		  i++;
		  break;
		}
		if(isdigit(keywords[i]))
		{
		    state=47;
		    i++;
		    break;
		}
		if(keywords[i]=='+')
		{
		    state=49;
		    i++;
		    break;
		}
		if(keywords[i]=='-')
		{
		    state=51;
		    i++;
		    break;
		}
		
	      else
		{
		  state = 1;
		  i++;
		}
	    }
	  else
	    {
	     
	      state =failState(state);
	      break;
	    }
	  break;
	case 1:
	  if (keywords[i] == 'f' || keywords[i] == 'm')
	    {
	     
	      if (keywords[i] == 'f')
		{
		  state = 2;
		  i++;
		}
	      else
		{
		  state = 4;
		  i++;
		}

	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 3:
	 
	  if (keywords[i] == '\0')
	    {
	      cout << "It is a keyword";
	      return 0;
	    }

	case 4:
	
	  if (keywords[i] == 'p')
	    {
	      state = 5;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }

	case 5:
	 
	  if (keywords[i] == 'o')
	    {
	      state = 6;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }

	case 6:
	 
	  if (keywords[i] == 'r')
	    {
	      state = 7;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }

	case 7:
	  
	  if (keywords[i] == 't')
	    {
	      state = 8;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }

	case 8:
	 
	  if (keywords[i] == '\0')
	    {
	      cout << "It is a keyword";
	      return 0;
	    }

	case 9:
	  if (keywords[i] == 'h' || keywords[i] == 'i')
	    {
	      if (keywords[i] == 'i')
		{
		  state = 14;
		  i++;
		  break;
		}
	      if (keywords[i] == 'h')
		{
		  state = 10;
		  i++;
		  break;
		}
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 10:
	  if (keywords[i] == 'i')
	    {
	      state = 11;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }

	case 11:
	 
	  if (keywords[i] == 'l')
	    {
	      state = 12;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }

	case 12:
	  if (keywords[i] == 'e')
	    {
	      state = 13;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 13:
	  if (keywords[i] == '\0')
	    {
	      cout << "It is a Keyword";
	      return 0;
	    }
	case 14:
	  if (keywords[i] == 't')
	    {
	      state = 15;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }

	case 15:
	  if (keywords[i] == 'h')
	    {
	      state = 16;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 16:
	  if (keywords[i] == '\0')
	    {
	    cout << "It is a Keyword";
	      return 0;
	    }

	case 17:
	  if (keywords[i] == 'i' || keywords[i] == 'o')
	    {
	      if (keywords[i] == 'o')
		{
		  state = 24;
		  i++;
		}
	      else
		{
		 
		  state = 18;
		  i++;

		}
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	  break;
	case 18:
	  if (keywords[i] == 'n')
	    {

	      state = 19;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 19:
	  if (keywords[i] == 'a')
	    {

	      state = 20;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 20:
	  if (keywords[i] == 'l')
	    {

	      state = 21;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 21:
	  if (keywords[i] == 'l')
	    {

	      state = 22;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 22:
	  if (keywords[i] == 'y')
	    {
	      state = 23;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 23:
	  if (keywords[i] == '\0')
	    {
	      cout << "It is a Keyword";
	      return 0;
	    }
	case 24:
	  if (keywords[i] == 'r')
	    {
	      state = 25;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 25:
	  if (keywords[i] == '\0')
	    {
	      cout << "It is a Keyword";
	      return 0;
	    }
	case 26:
	  if (keywords[i] == 'n' || keywords[i] == 's' || keywords[i] == 'w')
	    {
	      if (keywords[i] == 's')
		{
		  state = 29;
		  i++;
		  break;
		}
	      if (keywords[i] == 'w')
		{
		  state = 37;
		  i++;
		  break;
		}
	      else
		{

		  state = 27;
		  i++;
		}
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	  break;
	case 27:
	  if (keywords[i] == 'd')
	    {

	      state = 28;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 28:
	  if (keywords[i] == '\0')
	    {
	     cout << "It is a Keyword";
	      return 0;
	    }
	case 29:
	  if (keywords[i] == 's' || keywords[i] == 'y')
	    {
	      if (keywords[i] == 'y')
		{

		  state = 34;
		  i++;
		}
	      else
		{
		  state = 30;
		  i++;
		}
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	  break;
	case 30:
	  if (keywords[i] == 'e')
	    {

	      state = 31;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 31:
	  if (keywords[i] == 'r')
	    {

	      state = 32;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 32:
	  if (keywords[i] == 't')
	    {

	      state = 33;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 33:
	  if (keywords[i] == '\0')
	    {
	      cout << "It is a Keyword";
	      return 0;
	    }
	case 34:
	  if (keywords[i] == 'n')
	    {
	      state = 35;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 35:
	  if (keywords[i] == 'c')
	    {

	      state = 36;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 36:
	  if (keywords[i] == '\0')
	    {
	     cout << "It is a Keyword";
	      return 0;
	    }
	case 37:
	  if (keywords[i] == 'a')
	    {
	      state = 38;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 38:
	  if (keywords[i] == 'i')
	    {
	      state = 39;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 39:
	  if (keywords[i] == 't')
	    {
	      state = 39;
	      i++;
	    }
	  else
	    {
	      state = failState (state);
	      break;
	    }
	case 40:
	  if (keywords[i] == '\0')
	    {
	     cout << "It is a Keyword";
	      return 0;
	    }
	case 41:
	  {
	    if (isdigit (keywords[i]) || isalpha (keywords[i]))
	      {
		state = 41;
		i++;
	      }
	    else if (keywords[i] == '\0')
	      {
		state = 42;
		i++;
		break;
	      }
	  }
	case 42:
	  {
	    cout << "It is An Identifer";
	    return 0;
	  }

	case 43:
	  {
        if(keywords[i]==' ')
        {
            state=44;
            i++;
            break;
        }
        else if(keywords[i]=='=')
        {
            state=43;
            i++;
            break;
        }
        else
        {
            cout<<"IT is Not Valid operator";
            return 0;
        }
	  }
	  case 44:
	  {
	      cout<<"It is Valid operator";
	      return 0;
	  }
	  case 45:
	  {
	      if(keywords[i]==' '|| keywords[i]=='=')
	      {
	          state=44;
	          break;
	      }
	      else
	      {
	          cout<<"InValid operator";
	      }
	  }
	  
	  case 46:
	  {
	      if(keywords[i]==' '|| keywords[i]== '=')
	      {
	          state=44;
	          break;
	      }
	      else
	      {
	          cout<<"InValid operator";
	      }
	  }
	  case 47:
	  {
	      if(isdigit(keywords[i]))
	      {     
	          state=47;
	          i++;
	          break;
	      }
	      else if(keywords[i]=='\0')
	      { 
	          
	            state=48;
	            break;
	      }
	      else
	      {     
	          
	          cout<<"It is Not an constant";
	           return 0;
	          
	      }
	      
	  }
	  case 48:
	  {
	      cout<<"It is constant";
	      return 0;
	  }
	  case 49:
	  {
	     if(keywords[i]=='\0')
	      {
	          state=50;
	          break;
	      }
	      else
	      {
	          cout<<"It is Not Binary Operator";
	          return 0;
	      }
	  }
	  case 50:
	  {
	      cout<<"It is Binary Operator";
	      return 0;
	  }
	  case 51:
	  {
	     
	    if(keywords[i]=='\0')
	      {
	          state=52;
	          break;
	      }
	      else
	      {
	         cout<<"It is Not Valid Binary Operator";
	         return 0;
	      }
	  }
	  case 52:
	  {
	      cout<<"It is Binary Operator";
	      return 0;
	  }
	 case 53:
	 {
	     if(keywords[i]=='*')
	     {
	         state=53;
	         i++;
	         break;
	     }
	     else if(keywords[i]=='\0')
	     {
	         state=54;
	         break;
	     }
	     else
	     {
	       cout<<"It is Not Binary Valid Operator";
	       return 0;
	     }
	 case 54:
	   {
	        cout<<"It is Binary Operator";
	       return 0;
	   }
	 }
	  case 55:
	  {
	      if(keywords[i]=='/')
	      {
	          state=56;
	          break;
	      }
	      else
	      {
	       state=57;
	       break;
	      }
	  }
	  case 56:
	  {
	      cout<<"It is  Binary Operator";
	       return 0;
	  }
	  case 57:
	  {
	      if(keywords[i]=='%')
	      {
	          state=58;
	          break;
	      }
	      else
	      {
	          state=59;
	          break;
	      }
	  }
	  case 58:
	  {
	       cout<<"It is Binary Operator";
	       return 0;
	  }
	  case 59:
	  {
	      cout<<"It is Not Binary Operator";
	      return 0;
	  }
	 
	}//End Of Switch Statement

    }

  return 0;
}

