#include<iostream>
#include<cstdlib>
using namespace std;

char chess[8][8];
int king[8][2];
int queen[32][2];
int pawn[4][2];
int bishop[16][2];
int rock[16][2];
int knight[8][2];

void intialize(int arr[][2],int size)
{
	for(int j=0;j<size;j++)
	{
		for(int k=0;k<2;k++)
		{
			arr[j][k]=0;
		}
	}
}




void setup_chess(char chess[8][8])
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
		chess[i][j]='*';
	    }
	}
    
	chess[0][0]='R';
	chess[7][7]='r';
	chess[0][7]='R';
	chess[7][0]='r';
	chess[0][1]='N';
	chess[0][6]='N';
	chess[7][1]='n';
	chess[7][6]='n';
	chess[0][2]='B';
	chess[0][5]='B';
	chess[7][2]='b';
	chess[7][5]='b';
	chess[0][3]='Q';
	chess[0][4]='K';
	chess[7][3]='q';
	chess[7][4]='k';
	
	for(int i=0;i<8;i++)
	{
		chess[1][i]='P';
		chess[6][i]='p';
	}
}


void print_chess()
{
	cout<<"  ";
	for(int i=0;i<8;i++)
	{
		cout<<i<<" ";
	}
	cout<< endl;
	for(int i=0;i<8;i++)
	{
		cout<<i<<" ";
		for(int j=0;j<8;j++)
		{
         cout<<chess[i][j]<<" ";
	    }
	    cout<<endl;
	}
}

void king1(int row,int col,char piece)  // move for king
 {
 	cout<<"Posible Positions for King"<<endl;
	cout<<"Row  column"<<endl;
 	
	if((row+1>=0 && row+1<=7 && col>=0 && col<=7)&&(
	chess[row+1][col]=='*' || (chess[row+1][col]>=97 && chess[row+1][col]<=97 ))) 
    {
      cout<<row<<"   "<<col<<endl;	
	}
	if((row-1>=0 && row-1<=7 && col>=0 && col<=7)&&
	(chess[row-1][col]=='*' || (chess[row-1][col]>=97 && chess[row+1][col]<=122 ))) 
      {
      cout<<row+1<<"   "<<col<<endl;	
	}
	if((row+1>=0 && row+1<=7 && col+1>=0 && col+1<=7)&&
	(chess[row+1][col+1]=='*' || (chess[row+1][col+1]>=97 && chess[row+1][col+1]<=122 ))) 
    {
      cout<<row+1<<"   "<<col+1<<endl;	
	}
	if(( row+1 >=0 && row+1 <=7 && col-1 >=0 && col-1 <=7)&&
     (chess[ row+1 ][ col-1 ]=='*' || (chess[ row+1 ][ col-1 ]>=97 && chess[row+1][col-1]<=122 ))) 
    {
      cout<<row+1<<"   "<<col-1<<endl;	
	}
	if(( row-1 >=0 && row-1 <=7 && col-1 >=0 && col-1 <=7)&&
    (chess[ row-1 ][ col-1 ]=='*' || (chess[ row-1 ][ col-1 ]>=97 && chess[row-1][col-1]<=122 ))) 
    {
      cout<<row-1<<"   "<<col-1<<endl;	
	}
	if(( row-1 >=0 && row-1 <=7 && col-1 >=0 && col-1 <=7)&&
    (chess[ row-1 ][ col-1 ]=='*' || (chess[ row-1 ][ col-1 ]>=97 && chess[row-1][col-1]<=122 ))) 
    {
      cout<<row-1<<"   "<<col-1<<endl;	
	}
	if(( row >=0 && row <=7 && col+1 >=0 && col+1 <=7)&&
   (chess[ row ][ col+1 ]=='*' || (chess[ row ][ col+1 ]>=97 && chess[row][col+1]<=122 ))) 
    {
      cout<<row<<"   "<<col+1<<endl;	
	}
	if(( row >=0 && row <=7 && col-1 >=0 && col-1 <=7)&&
     (chess[ row ][ col-1 ]=='*' || (chess[ row ][ col-1 ]>=97 && chess[row][col-1]<=122 ))) 
    {
      cout<<row<<"    "<<col -1<<endl;	
	}
}


void king2(int row,int col,char piece)  // move for king
 {
 	bool check=false;
 	cout<<"Posible Positions for King"<<endl;
	cout<<"Row  column"<<endl;
 	
	if((row+1>=0 && row+1<=7 && col>=0 && col<=7)&&(
	chess[row+1][col]=='*' || (chess[row+1][col]>=65 && chess[row+1][col]<=97 ))) 
    {
      cout<<row+1<<"   "<<col<<endl;	
      check=true;
	}
	if((row-1>=0 && row-1<=7 && col>=0 && col<=7)&&
	(chess[row-1][col]=='*' || (chess[row-1][col]>=65 && chess[row+1][col]<=90 ))) 
      {
       cout<<row-1<<"   "<<col<<endl;
	   check=true;	
	}
	if((row+1>=0 && row+1<=7 && col+1>=0 && col+1<=7)&&
	(chess[row+1][col+1]=='*' || (chess[row+1][col+1]>=65 && chess[row+1][col+1]<=90 ))) 
    {
      cout<<row+1<<"   "<<col+1<<endl;
	  check=true;	
	}
	if(( row+1 >=0 && row+1 <=7 && col-1 >=0 && col-1 <=7)&&
     (chess[ row+1 ][ col-1 ]=='*' || (chess[ row+1 ][ col-1 ]>=65 && chess[row+1][col-1]<=90 ))) 
    {
      cout<<row+1<<"   "<<col-1<<endl;
	  check=true;	
	}
	if(( row-1 >=0 && row-1 <=7 && col-1 >=0 && col-1 <=7)&&
    (chess[ row-1 ][ col-1 ]=='*' || (chess[ row-1 ][ col-1 ]>=65 && chess[row-1][col-1]<=90 ))) 
    {
      cout<<row-1<<"   "<<col-1<<endl;
	  check=true;	
	}
	if(( row-1 >=0 && row-1 <=7 && col-1 >=0 && col-1 <=7)&&
    (chess[ row-1 ][ col-1 ]=='*' || (chess[ row-1 ][ col-1 ]>=65 && chess[row-1][col-1]<=90 ))) 
    {
      cout<<row-1<<"   "<<col-1<<endl;
	  check=true;	
	}
	if(( row >=0 && row <=7 && col+1 >=0 && col+1 <=7)&&
   (chess[ row ][ col+1 ]=='*' || (chess[ row ][ col+1 ]>=65 && chess[row][col+1]<=90 ))) 
    {
      cout<<row<<"   "<<col+1<<endl;
	  check=true;	
	}
	if(( row >=0 && row <=7 && col-1 >=0 && col-1 <=7)&&
     (chess[ row ][ col-1 ]=='*' || (chess[ row ][ col-1 ]>=65 && chess[row][col-1]<=90 ))) 
    {
      cout<<row<<"    "<<col -1<<endl;
	  check=true;	
	}
}

void pawn1(int row,int col,char piece)  // move for pawn
{
	bool check=false;
       int l=0;
	cout<<"Posible Positions for pawn"<<endl;
	cout<<"Row  column"<<endl;
    
	 if( row-1 >=0 && row+1 <=7 && col >=0 && col <=7) //checking if row and col is not out of the gird
	{
        if(chess[ row-1 ][ col ]=='*' ) //checking if there is not already piece
        {	
         cout<<row-1 <<"    "<<col<<endl;
         check=true;
         pawn[l++][0]=row-1;
         pawn[l++][1]=col; 	
	} 
    }
	if((row == 6  && piece=='p')||(row == 1  && piece=='P'))
	{
        if(( row-2 >=0 && row-2 <=7 && col >=0 && col <=7)&&
        (chess[ row-2 ][ col ]=='*'  )) 
       {
       cout<<row-2 <<"    "<<col<<endl;
         pawn[l++][0]=row-2;
         pawn[l++][1]=col;
         check=true;	
	   } 
	}   	
	 if(( row-1 >=0 && row-1 <=7 && col+1 >=0 && col+1 <=7)&&
     (chess[ row-1 ][ col+1 ]!='*' && (chess[ row-1 ][ col+1 ]>=65 && chess[row-1][col+1 ]<=90 ))) 
    {
      cout<<row-1 << "    " <<col+1<<endl;
         check=true;
         pawn[l++][0]=row-1;
         pawn[l++][1]=col+1;	
    }
	 if(( row+1 >=0 && row+1 <=7 && col-1 >=0 && col-1 <=7)&&
     (chess[ row-1 ][ col-1 ]!='*' && (chess[ row-1 ][ col-1 ]>=65 && chess[row-1][col-1 ]<=90 ))) 
    {
      cout<<row-1 <<"    "<<col-1<<endl;
         pawn[l++][0]=row-1;
         pawn[l++][1]=col-1;
         check=true;	
    }
    if(check==false)
    {
      cout<<"nil   nil";
    }
}

void pawn2(int row,int col,char piece)  // move for pawn
{       
    int l=0;
	cout<<"Posible Positions for pawn"<<endl;
	cout<<"Row  column"<<endl;
    bool check=false;
	 if( row+1 >=0 && row+1 <=7 && col >=0 && col <=7) //checking if row and col is not out of the gird
	{
    if(chess[ row+1 ][ col ]=='*' ) //checking if there is not already piece
    {	
        cout<<row+1 <<"    "<<col<<endl;
         pawn[l++][0]=row+1;
         pawn[l++][1]=col;
         check=true;	
	} 
    }
	if((row == 6  && piece=='p')||(row == 1  && piece=='P'))
	{
        if(( row+2 >=0 && row+2 <=7 && col >=0 && col <=7)&&
        (chess[ row+2 ][ col ]=='*'  )) 
       {
          cout<<row+2 <<"    "<<col<<endl;
         pawn[l++][0]=row+2;
         pawn[l++][1]=col;
         check=true;	
	} 
	}   	
	 if(( row+1 >=0 && row+1 <=7 && col+1 >=0 && col+1 <=7)&&
     (chess[ row+1 ][ col+1 ]!='*' && (chess[ row+1 ][ col+1 ]>=97 && chess[row+1][col+1 ]<=122 ))) 
    {
         cout<<row+1 << "    " <<col+1<<endl;
         check=true;
         pawn[l++][0]=row+1;
         pawn[l++][1]=col+1;
               	
    }
	 if(( row+1 >=0 && row+1 <=7 && col-1 >=0 && col-1 <=7)&&
     (chess[ row+1 ][ col-1 ]!='*' && (chess[ row+1 ][ col-1 ]>=97 && chess[row+1][col-1 ]<=122 ))) 
    {
         cout<<row-1 <<"    "<<col-1<<endl;
         check=true;
         pawn[l++][0]=row+1;
         pawn[l++][1]=col-1;	
    } 
}


void rock1(int row,int col,char piece)
{
    int l=0;
	cout<<"Posible Positions for pawn"<<endl;
	cout<<"Row  column"<<endl;
	bool check=false;
	for(int j=row;j<=7;j++)
	{
		
	if(chess[ row+1 ][ col ]>=97 && chess[ row+1 ][ col ]<=122 )
	  {
 	   break;
           }  	
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
           (chess[ j ][ col ]=='*' || (chess[ j ][ col ]>=65 && chess[j][ col]<=90 ))) 
	{
	   cout<<j<<"   "<<col<<endl;
	   check=true;
         rock[l++][0]=j;
         rock[l++][1]=col;   	 
	}
	if(chess[ j ][ col ]>=65 && chess[j][ col]<=90 )
	{
		break;
        }
	}
	
	for(int j=row;j>0;j--)
	{
	
  	 if(chess[ row-1 ][ col ]>=97 && chess[ row-1 ][ col ]<=122 )
	  {
		break;
      }
		
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
        (chess[ j ][ col ]=='*' || (chess[ j ][ col ]>=65 && chess[ j ][ col]<=90 ))) 
	{
	   cout<<j<<"   "<<col<<endl;
           rock[l++][0]=j;
           rock[l++][1]=col; 
	   check=true;  	 
	}
	if(chess[ j ][ col ]>=65 && chess[ j ][ col]<=90 )
	{
		break;
    }	
	}
	
	for(int j=col;j<=7;j++)
	{
	if(chess[ row ][ col+1 ]>=97 && chess[ row ][ col+1 ]<=122 )
	  {
		break;
      }	
		
	if(( j >= 0 && j <= 7 && col >= 0 && col <= 7)&&
          (chess[ row ][ j ]=='*' || (chess[ row ][ j ]>=65 && chess[ row ][ j ]<=90 ))) 
	  {
	   cout<<row<<"   "<<j<<endl;
	   check=true;
           rock[l++][0]=row;
           rock[l++][1]=j;   	 
	  }
	if(chess[ row ][ j ]>=65 && chess[ row ][ j ]<=90 )
	  {
		break;
      }	
	}
	
	for(int j=col;j>=0;j--)
	{
	
	 if(chess[ row ][ col-1 ]>=97 && chess[ row ][ col-1 ]<=122 )
	  {
		break;
          }	
		
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
          (chess[ row ][ j ]=='*' || (chess[ row ][ j ]>=65 && chess[ row ][ j ]<=90 ))) 
	{
	   cout<<row<<"   "<<j<<endl;
	   check=true; 
           rock[l++][0]=row;
           rock[l++][1]=j;  	 
	}
	if(chess[ row ][ j ]>=65 && chess[row][ j ]<=90 )
	{
		break;
         }	
	}
	if(check==false)
	{
		cout<<"nil  nil";
	}
}

void rock2(int row,int col,char piece)
{
	cout<<"Posible Positions for rock"<<endl;
	cout<<"Row  column"<<endl;
	bool check=false;
	int l=0;
	for(int j=row;j<=7;j++)
	{
		
	if(chess[ row+1 ][ col ]>=65 && chess[ row+1 ][ col ]<=90 )
	  {
 		break;
      }  	
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
      (chess[ j ][ col ]=='*' || (chess[ j ][ col ]>=97 && chess[j][ col]<=122 ))) 
	{
	   cout<<j<<"   "<<col<<endl;
	   check=true;  
           rock[l++][0]=j;
           rock[l++][1]=col; 	 
	}
	if(chess[ j ][ col ]>=97 && chess[j][ col]<=122 )
	 {
		break;
         }
	}
	
	for(int j=row;j>0;j--)
	{
	
  	 if(chess[ row-1 ][ col ]>=65 && chess[ row-1 ][ col ]<=90 )
	  {
		break;
      }
		
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
        (chess[ j ][ col ]=='*' || (chess[ j ][ col ]>=97 && chess[ j ][ col]<=122 ))) 
	{
	   cout<<j<<"   "<<col<<endl; 
	   check=true;
           rock[l++][0]=j;
           rock[l++][1]=col;  	 
	}
	if(chess[ j ][ col ]>=97 && chess[ j ][ col]<=122 )
	{
		break;
    }	
	}
	
	for(int j=col;j<=7;j++)
	{
	if(chess[ row ][ col+1 ]>=65 && chess[ row ][ col+1 ]<=90 )
	  {
		break;
      }	
		
	if(( j >= 0 && j <= 7 && col >= 0 && col <= 7)&&
          (chess[ row ][ j ]=='*' || (chess[ row ][ j ]>=97 && chess[ row ][ j ]<=122 ))) 
	  {
	   cout<<row<<"   "<<j<<endl;
	   check=true;
           rock[l++][0]=row;
           rock[l++][1]=j;   	 
	  }
	if(chess[ row ][ j ]>=97 && chess[ row ][ j ]<=122 )
	  {
		break;
      }	
	}
	
	for(int j=col;j>=0;j--)
	{
	
	 if(chess[ row ][ col-1 ]>=65 && chess[ row ][ col-1 ]<=90 )
	  {
		break;
      }	
		
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
    (chess[ row ][ j ]=='*' || (chess[ row ][ j ]>=97 && chess[ row ][ j ]<=122 ))) 
	{
	   cout<<row<<"   "<<j<<endl;
	   check=true;
           rock[l++][0]=row;
           rock[l++][1]=j;   	 
	}
	if(chess[ row ][ j ]>=97 && chess[row][ j ]<=122 )
	{
		break;
      }	
	}
	if(check==false)
	{
		cout<<"nil  nil";
	}
}

void bishop2(int row,int col,char piece)
{
        int l=0;
	cout<<"Posible Positions for Bishop"<<endl;
	cout<<"Row  column"<<endl;
	bool check=false;
	for(int j=row, k=col;(j<=7 && k<=7);j++,k++) //if next move the loewercase alphabet don't execute
	{
	if(chess[ row+1 ][ col+1 ]>=65 && chess[ row+1 ][ col+1 ]<=90 )
	  {
 	 	break;
      }  	
	if(( j >=0 && j <=7 && k >=0 && k <=7)&&
      (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=97 && chess[ j ][ k ]<=122 ))) 
	{
	   cout<<j<<"   "<<k<<endl;
	   check=true; 
           bishop[l++][0]=j;
           bishop[l++][1]=k;  	 
	}
	if(chess[ j ][ k ]>=97 && chess[j][ k]<=122 )
	 {
		break;
         }
	}
	for(int j=row,k=col;j>=0,k>=0;j--,k--)
	{
	
  	 if(chess[ row-1 ][ col-1 ]>=65 && chess[ row-1 ][ col-1 ]<=90 )
	  {
		break;
          }
		
	if(( j >=0 && j <=7 && k >=0 && k <=7)&& 
        (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=97 && chess[ j ][ k ]<=122 ))) 
	{
	   cout<<j<<"   "<<k<<endl; 
	   check=true;
           bishop[l++][0]=j;
           bishop[l++][1]=k;  	 
	}
	if(chess[ j ][ k ]>=97 && chess[ j ][ k ]<=122 )
	{
		break;
        }	
	}
	
	for(int j=row,k=col; (j<=7 && k>=0);j++,k--)
	{
	if(chess[ row+1 ][ col-1 ]>=65 && chess[ row+1 ][ col-1 ]<=90 )
	  {
		break;
      }	
		
	if(( j >= 0 && j <= 7 && col >= 0 && col <= 7)&&
          (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=97 && chess[ j ][ k ]<=122 ))) 
	  {
	   cout<<j<<"   "<<k<<endl;
	   check=true;
           bishop[l++][0]=j;
           bishop[l++][1]=k;   	 
	  }
	if(chess[ row ][ j ]>=97 && chess[ row ][ j ]<=122)
	  {
		break;
      }	
	}
	
	for(int j=row,k=col; (j<=7 && k>=0);j--,k++)
	{
	
	 if(chess[ row-1 ][ col+1 ]>=65 && chess[ row-1 ][ col+1 ]<=90 )
	  {
		break;
      }	
		
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
           (chess[ row ][ j ]=='*' || (chess[ row ][ j ]>=97 && chess[ row ][ j ]<=122 ))) 
	{
	   cout<<j<<"   "<<k<<endl;
	   check=true;
           bishop[l++][0]=j;
           bishop[l++][1]=k;   	 
	}
	if(chess[ j ][ k ]>=97 && chess[ j ][ k ]<=122 )
	{
		break;
        }	
	}
	if(check==false)
	{
		cout<<"nil  nil";
	}
}

void bishop1(int row,int col,char piece)
{

        int l=0;
	cout<<"Posible Positions for Bishop"<<endl;
	cout<<"Row  column"<<endl;
	bool check=false;
	int k=col;
	for(int j=row;(j<=7 && k<=7);j++,k++)
	{
	 
	if(chess[ row+1 ][ col+1 ]>=97 && chess[ row+1 ][ col+1 ]<=122 )
	  {
 		break;
          }  	
	if(( j >=0 && j <=7 && k >=0 && k <=7)&&
      (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=65 && chess[ j ][ k ]<=90 )))
	{
	   cout<<j<<"   "<<k<<endl;
	   check=true;
           bishop[l++][0]=j;
           bishop[l++][1]=k;   	 
	}
	if(chess[ j ][ k ]>=65 && chess[j][ k]<=90 )
	 {
		break;
     }
	}
	
	for(int j=row,k=col;j>=0,k>=0;j--,k--)
	{
	
  	 if(chess[ row-1 ][ col-1 ]>=97 && chess[ row-1 ][ col-1 ]<=122 )
	  {
		break;
          }
		
	if(( j >=0 && j <=7 && k >=0 && k <=7)&& 
        (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=65 && chess[ j ][ k ]<=90 ))) 
	{
	   cout<<j<<"   "<<k<<endl; 
	   check=true; 
           bishop[l++][0]=j;
           bishop[l++][1]=k; 	 
	}
	if(chess[ j ][ k ]>=65 && chess[ j ][ k ]<=90 )
	{
		break;
        }	
	}
	
	for(int j=row,k=col; (j<=7 && k>=0);j++,k--)
	{
	if(chess[ row+1 ][ col-1 ]>=97 && chess[ row+1 ][ col-1 ]<=122 )
	  {
		break;
      }	
		
	if(( j >= 0 && j <= 7 && col >= 0 && col <= 7)&&
          (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=65 && chess[ j ][ k ]<=90 ))) 
	  {
	   cout<<j<<"   "<<k<<endl;
	   check=true;
           bishop[l++][0]=j;
           bishop[l++][1]=k;   	 
	  }
	  if(chess[ row ][ j ]>=65 && chess[ row ][ j ]<=90 )
	  {
		break;
      }	
	}
	
	for(int j=row,k=col; (j<=7 && k>=0);j--,k++)
	{
	
	 if(chess[ row-1 ][ col+1 ]>=97 && chess[ row-1 ][ col+1 ]<=122 )
	  {
		break;
      }	
		
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
           (chess[ row ][ j ]=='*' || (chess[ row ][ j ]>=65 && chess[ row ][ j ]<=90 ))) 
	{
	   cout<<j<<"   "<<k<<endl;
	   check=true;
           bishop[l++][0]=j;
           bishop[l++][1]=k;   	 
	}
	if(chess[ j ][ k ]>=65 && chess[ j ][ k ]<=90 )
	{
		break;
        }	
	}
	if(check==false)
	{
		cout<<"nil  nil";
	}
}

void knight1(int row,int col,char piece)  // moves for knight for player 1  
 {  
    cout<<"Posible Positions for knight"<<endl;
	cout<<"Row  column"<<endl;
 	
 	bool check=false;
 	int l=0;
	if((row+2>=0 && row+2<=7 && col+1>=0 && col+1<=7)&&(
	chess[row+2][col+1]=='*' || (chess[row+2][col+1]>=65 && chess[row+2][col+1]<=97 ))) 
    {
      cout<<row+2<<"   "<<col+1<<endl;
	  check=true;
          knight[l++][0]=row+2;
          knight[l++][1]=col+1;	
	}
	if((row+2>=0 && row+2<=7 && col-1>=0 && col-1<=7)&&
	(chess[row+2][col-1]=='*' || (chess[row+2][col-1]>=65 && chess[row+2][col-1]<=90 ))) 
      {
          cout<<row+2<<"   "<<col-1<<endl;
	  check=true;
          knight[l++][0]=row+2;
          knight[l++][1]=col-1;	
	}
	if((row-2>=0 && row-2<=7 && col+1>=0 && col+1<=7)&&
	(chess[row-2][col+1]=='*' || (chess[row-2][col+1]>=65 && chess[row-2][col+1]<=90 ))) 
    {
          cout<<row-2<<"   "<<col+1<<endl;
	  check=true;
          knight[l++][0]=row-2;
          knight[l++][1]=col+1;	
	}
	if(( row-2 >=0 && row-2 <=7 && col-1 >=0 && col-1 <=7)&&
     (chess[ row-2 ][ col-1 ]=='*' || (chess[ row-2 ][ col-1 ]>=65 && chess[row-2][col-1]<=90 ))) 
    {
      cout<<row-2<<"   "<<col-1<<endl;
	  check=true;
          knight[l++][0]=row-2;
          knight[l++][1]=col-1;	
	}
	if(( row+1 >=0 && row+1 <=7 && col+2 >=0 && col+2 <=7)&&
    (chess[ row+1 ][ col+2 ]=='*' || (chess[ row+1 ][ col+2 ]>=65 && chess[row+1][col+2]<=90 ))) 
    {
          cout<<row+1<<"   "<<col+2<<endl;
	  check=true;
          knight[l++][0]=row+1;
          knight[l++][1]=col+2;	
	}
	if(( row-1 >=0 && row-1 <=7 && col+2 >=0 && col+2 <=7)&&
    (chess[ row-1 ][ col+2 ]=='*' || (chess[ row-1 ][ col+2 ]>=65 && chess[row-1][col+2]<=90 ))) 
    {
          cout<< row-1 <<"   "<< col+2 <<endl;
	  check=true;
          knight[l++][0]=row-1;
          knight[l++][1]=col+2;	
	}
	if(( row+1 >=0 && row+1 <=7 && col-2 >=0 && col-2 <=7)&&
   (chess[ row+1 ][ col-2 ]=='*' || (chess[ row+1 ][ col-2 ]>=65 && chess[ row+1 ][col-2]<=90 ))) 
    {
          cout<<row+1<<"   "<<col-2<<endl;
	  check=true;
          knight[l++][0]=row+1;
          knight[l++][1]=col-2;	
	}
	if(( row-1 >=0 && row-1 <=7 && col-2 >=0 && col-2 <=7)&&
     (chess[ row-1 ][ col-2 ]=='*' || (chess[ row-1 ][ col-2 ]>=65 && chess[row-1][col-2]<=90 ))) 
    {
       cout<<row-1<<"   "<<col-2<<endl;	
       check=true;
       knight[l++][0]=row-1;
       knight[l++][1]=col-2;
     }
	
	if(check==false)
	{
		cout<<"nil  nil";
	}
}


void knight2(int row,int col,char piece)  // move for knight
 {  
    cout<<"Posible Positions for knight"<<endl;
	cout<<"Row  column"<<endl;
 	
 	bool check=false;
 	int l=0;
	if((row+2>=0 && row+2<=7 && col+1>=0 && col+1<=7)&&(
	chess[row+2][col+1]=='*' || (chess[row+2][col+1]>=97 && chess[row+2][col+1]<=122 ))) 
    {
           cout<<row+2<<"   "<<col+1<<endl;
	       check=true;
           knight[l++][0]=row+2;
           knight[l++][1]=col+1;
	
	}
	if((row+2>=0 && row+2<=7 && col-1>=0 && col-1<=7)&&
	(chess[row+2][col-1]=='*' || (chess[row+2][col-1]>=97 && chess[row+2][col-1]<=122 ))) 
      {
          cout<<row+2<<"   "<<col-1<<endl;
	      check=true;
          knight[l++][0]=row+2;
          knight[l++][1]=col-1;	
	}
	if((row-2>=0 && row-2<=7 && col+1>=0 && col+1<=7)&&
	(chess[row-2][col+1]=='*' || (chess[row-2][col+1]>=97 && chess[row-2][col+1]<=122 ))) 
    {
          cout<<row-2<<"   "<<col+1<<endl;
	  check=true;
	  knight[l++][0]=row-2;
          knight[l++][1]=col+1;
	}
	if(( row-2 >=0 && row-2 <=7 && col-1 >=0 && col-1 <=7)&&
     (chess[ row-2 ][ col-1 ]=='*' || (chess[ row-2 ][ col-1 ]>=97 && chess[row-2][col-1]<=122 ))) 
    {
          cout<<row-2<<"   "<<col-1<<endl;
	  check=true;
          knight[l++][0]=row-2;
          knight[l++][1]=col-1;	
	}
	if(( row+1 >=0 && row+1 <=7 && col+2 >=0 && col+2 <=7)&&
    (chess[ row+1 ][ col+2 ]=='*' || (chess[ row+1 ][ col+2 ]>=97 && chess[row+1][col+2]<=122 ))) 
    {
          cout<<row+1<<"   "<<col+2<<endl;
	  check=true;
          knight[l++][0]=row+1;
          knight[l++][1]=col+2;	
	}
	if(( row-1 >=0 && row-1 <=7 && col+2 >=0 && col+2 <=7)&&
    (chess[ row-1 ][ col+2 ]=='*' || (chess[ row-1 ][ col+2 ]>=97 && chess[row-1][col+2]<=122 ))) 
    {
          cout<< row-1 <<"   "<< col+2 <<endl;
	  check=true;
          knight[l++][0]=row-1;
          knight[l++][1]=col+2;	
	}
	if(( row+1 >=0 && row+1 <=7 && col-2 >=0 && col-2 <=7)&&
   (chess[ row+1 ][ col-2 ]=='*' || (chess[ row+1 ][ col-2 ]>=97 && chess[ row+1 ][col-2]<=122 ))) 
    {
          cout<<row+1<<"   "<<col-2<<endl;
	      check=true;
          knight[l++][0]=row+1;
          knight[l++][1]=col-2;	
	}
	if(( row-1 >=0 && row-1 <=7 && col-2 >=0 && col-2 <=7)&&
     (chess[ row-1 ][ col-2 ]=='*' || (chess[ row-1 ][ col-2 ]>=97 && chess[row-1][col-2]<=122 ))) 
    {
      cout<<row-1<<"   "<<col-2<<endl;	
      check=true;
      knight[l++][0]=row-1;
      knight[l++][1]=col-2;
    }	
	if(check==false)
	{
	  cout<<"nil  nil";
	}
}


void queen2(int row,int col)
{
  cout<<"Possible moves for queen"<<endl;
  cout<<"row  column";
  bool check=false;
  int l=0;
  for(int j=row, k=col;(j<=7 && k<=7);j++,k++) //if next move the loewercase alphabet don't execute
	{
	if(chess[ row+1 ][ col+1 ]>=65 && chess[ row+1 ][ col+1 ]<=90 )
	  {
 	 	break;
      }  	
	if(( j >=0 && j <=7 && k >=0 && k <=7)&&
      (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=97 && chess[ j ][ k ]<=122 ))) 
	{
	   cout<<j<<"   "<<k<<endl;
	   check=true;
           queen[l++][0]=j;
           queen[l++][1]=k;   	 
	}
	if(chess[ j ][ k ]>=97 && chess[j][ k]<=122 )
	 {
		break;
     }
	}
	
	for(int j=row,k=col;j>=0,k>=0;j--,k--)
	{
	
  	 if(chess[ row-1 ][ col-1 ]>=65 && chess[ row-1 ][ col-1 ]<=90 )
	  {
		break;
          }
		
	if(( j >=0 && j <=7 && k >=0 && k <=7)&& 
      (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=97 && chess[ j ][ k ]<=122 ))) 
	{
	   cout<<j<<"   "<<k<<endl; 
	   check=true; 
           queen[l++][0]=j;
           queen[l++][1]=k;  	 
	}
	if(chess[ j ][ k ]>=97 && chess[ j ][ k ]<=122 )
	 { 
		break;
     }	
	}
	
	for(int j=row,k=col; (j<=7 && k>=0);j++,k--)
	{
	if(chess[ row+1 ][ col-1 ]>=65 && chess[ row+1 ][ col-1 ]<=90 )
	  {
		break;
      }	
		
	 if(( j >= 0 && j <= 7 && col >= 0 && col <= 7)&&
          (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=97 && chess[ j ][ k ]<=122 ))) 
	  {
	   cout<<j<<"   "<<k<<endl;
	   check=true;  
           queen[l++][0]=j;
           queen[l++][1]=k;  	 
	  }
	if(chess[ row ][ j ]>=97 && chess[ row ][ j ]<=122 )
	  {
		break;
      }	
	}
	
	for(int j=row,k=col; (j<=7 && k>=0);j--,k++)
	{
	
	 if(chess[ row-1 ][ col+1 ]>=65 && chess[ row-1 ][ col+1 ]<=90 )
	  {
		break;
      }	
		
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
      (chess[ row ][ j ]=='*' || (chess[ row ][ j ]>=97 && chess[ row ][ j ]<=122 ))) 
	{
	   cout<<j<<"   "<<k<<endl;
	   check=true;  
            queen[l++][0]=j;
            queen[l++][1]=k;  	 
	}
	if(chess[ j ][ k ]>=97 && chess[ j ][ k ]<=122 )
	{
		break;
        }
	
	}

       for(int j=row;j<=7;j++)
	{
		
	if(chess[ row+1 ][ col ]>=65 && chess[ row+1 ][ col ]<=90 )
	  {
 		break;
      }  	
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
      (chess[ j ][ col ]=='*' || (chess[ j ][ col ]>=97 && chess[j][ col]<=122 ))) 
	{
	   cout<<j<<"   "<<col<<endl;
	   check=true;  
           rock[l++][0]=j;
           rock[l++][1]=col; 	 
	}
	if(chess[ j ][ col ]>=97 && chess[j][ col]<=122 )
	 {
		break;
         }
	}
	
	for(int j=row;j>0;j--)
	{
	
  	 if(chess[ row-1 ][ col ]>=65 && chess[ row-1 ][ col ]<=90 )
	  {
		break;
      }
		
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
        (chess[ j ][ col ]=='*' || (chess[ j ][ col ]>=97 && chess[ j ][ col]<=122 ))) 
	{
	   cout<<j<<"   "<<col<<endl; 
	   check=true;
           rock[l++][0]=j;
           rock[l++][1]=col;  	 
	}
	if(chess[ j ][ col ]>=97 && chess[ j ][ col]<=122 )
	{
		break;
    }	
	}
	
	for(int j=col;j<=7;j++)
	{
	if(chess[ row ][ col+1 ]>=65 && chess[ row ][ col+1 ]<=90 )
	  {
		break;
      }	
		
	if(( j >= 0 && j <= 7 && col >= 0 && col <= 7)&&
          (chess[ row ][ j ]=='*' || (chess[ row ][ j ]>=97 && chess[ row ][ j ]<=122 ))) 
	  {
	   cout<<row<<"   "<<j<<endl;
	   check=true;
           rock[l++][0]=row;
           rock[l++][1]=j;   	 
	  }
	if(chess[ row ][ j ]>=97 && chess[ row ][ j ]<=122 )
	  {
		break;
      }	
	}
	
	for(int j=col;j>=0;j--)
	{
	
	 if(chess[ row ][ col-1 ]>=65 && chess[ row ][ col-1 ]<=90 )
	  {
		break;
      }	
		
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
    (chess[ row ][ j ]=='*' || (chess[ row ][ j ]>=97 && chess[ row ][ j ]<=122 ))) 
	{
	   cout<<row<<"   "<<j<<endl;
	   check=true;
           rock[l++][0]=row;
           rock[l++][1]=j;   	 
	}
	if(chess[ row ][ j ]>=97 && chess[row][ j ]<=122 )
	{
		break;
      }	

	if(check==false)
	{
		cout<<"nil  nil";
	}	
}
}
void queen1(int row,int col)
{
	cout<<"Posible Positions for Bishop"<<endl;
	cout<<"Row  column"<<endl;
	bool check=false;
	int k=col;
	int l=0;
	for(int j=row;(j<=7 && k<=7);j++,k++)
	{
	 
	 if(chess[ row+1 ][ col+1 ]>=97 && chess[ row+1 ][ col+1 ]<=122 )
	  {
 		break;
          }  	
	if(( j >=0 && j <=7 && k >=0 && k <=7)&&
      (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=65 && chess[ j ][ k ]<=90 )))
	{
	   cout<<j<<"   "<<k<<endl;
	   check=true; 
           queen[l++][0]=j;
           queen[l++][1]=k;  	 
	}
	if(chess[ j ][ k ]>=65 && chess[j][ k]<=90 )
	 {
		break;
     }
	}
	
	for(int j=row,k=col;j>=0,k>=0;j--,k--)
	{
	
  	 if(chess[ row-1 ][ col-1 ]>=97 && chess[ row-1 ][ col-1 ]<=122 )
	  {
		break;
          }
		
	  if(( j >=0 && j <=7 && k >=0 && k <=7)&& 
          (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=65 && chess[ j ][ k ]<=90 ))) 
	{
	   cout<<j<<"   "<<k<<endl; 
	   check=true;
           queen[l++][0]=j;
           queen[l++][1]=k;  	 
	}
	if(chess[ j ][ k ]>=65 && chess[ j ][ k ]<=90 )
	{
		break;
        }	
	}
	
	for(int j=row,k=col; (j<=7 && k>=0);j++,k--)
	{
	if(chess[ row+1 ][ col-1 ]>=97 && chess[ row+1 ][ col-1 ]<=122 )
	  {
		break;
      }	
		
	if(( j >= 0 && j <= 7 && k >= 0 && k <= 7)&&
          (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=65 && chess[ j ][ k ]<=90 ))) 
	  {
	   cout<<j<<"   "<<k<<endl;
	   check=true;  
           queen[l++][0]=j;
           queen[l++][1]=k; 	 
	  }
	  if(chess[ row ][ j ]>=65 && chess[ row ][ j ]<=90 )
	  {
		break;
      }	
	}
	
	for(int j=row,k=col; (j<=7 && k>=0);j--,k++)
	{
	
	 if(chess[ row-1 ][ col+1 ]>=97 && chess[ row-1 ][ col+1 ]<=122 )
	  {
		break;
          }	
		
	if(( j >=0 && j <=7 && k >=0 && k <=7)&&
           (chess[ j ][ k ]=='*' || (chess[ j ][ k ]>=65 && chess[ j ][ k ]<=90 ))) 
	{
	   cout<<j<<"   "<<k<<endl;
	   check=true;
            queen[l++][0]=j;
           queen[l++][1]=k;   	 
	}
	if(chess[ j ][ k ]>=65 && chess[ j ][ k ]<=90 )
	{
		break;
        }	
	}
       	for(int j=row;j<=7;j++)
	{
		
	if(chess[ row+1 ][ col ]>=97 && chess[ row+1 ][ col ]<=122 )
	  {
 		break;
      }  	
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
      (chess[ j ][ col ]=='*' || (chess[ j ][ col ]>=65 && chess[j][ col]<=90 ))) 
	{
	   cout<<j<<"   "<<col<<endl;
	   check=true;
           queen[l++][0]=j;
           queen[l++][1]=col;
              	 
	}
	if(chess[ j ][ col ]>=65 && chess[j][ col]<=90 )
	{
		break;
    }
	}
	
	for(int j=row;j>0;j--)
	{
	
  	 if(chess[ row-1 ][ col ]>=97 && chess[ row-1 ][ col ]<=122 )
	  {
		break;
      }
		
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
        (chess[ j ][ col ]=='*' || (chess[ j ][ col ]>=65 && chess[ j ][ col]<=90 ))) 
	{
	   cout<<j<<"   "<<col<<endl; 
	   check=true; 
           queen[l++][0]=j;
           queen[l++][1]=col; 	 
	}
	if(chess[ j ][ col ]>=65 && chess[ j ][ col]<=90 )
	{
		break;
    }	
	}
	
	for(int j=col;j<=7;j++)
	{
	if(chess[ row ][ col+1 ]>=97 && chess[ row ][ col+1 ]<=122 )
	  {
		break;
      }	
		
	if(( j >= 0 && j <= 7 && col >= 0 && col <= 7)&&
          (chess[ row ][ j ]=='*' || (chess[ row ][ j ]>=65 && chess[ row ][ j ]<=90 ))) 
	  {
	   cout<<row<<"   "<<j<<endl;
	   check=true; 
            queen[l++][0]=row;
           queen[l++][1]=j;  	 
	  }
	if(chess[ row ][ j ]>=65 && chess[ row ][ j ]<=90 )
	  {
		break;
      }	
	}
	
	for(int j=col;j>=0;j--)
	{
	
	 if(chess[ row ][ col-1 ]>=97 && chess[ row ][ col-1 ]<=122 )
	  {
		break;
      }	
		
	if(( j >=0 && j <=7 && col >=0 && col <=7)&&
    (chess[ row ][ j ]=='*' || (chess[ row ][ j ]>=65 && chess[ row ][ j ]<=90 ))) 
	{
	   cout<<row<<"   "<<j<<endl;
	   check=true; 
           queen[l++][0]=row;
           queen[l++][1]=j;  	 
	}
	if(chess[ row ][ j ]>=65 && chess[row][ j ]<=90 )
	{
		break;
    }	
	}
	if(check==false)
	{
		cout<<"nil  nil";
	}             
}

bool check_king1()  //to check if the king is killed or not
{
	bool king1=false;
	for(int j=0;j<8;j++)
	{
		for(int k=0;k<8;k++)
		{
			if(chess[j][k]=='k')
		    {
	          king1=true;
			  break; 	    	
			}
		}
	}
}

bool check_king2()  //to check if the king is killed or not
{
	bool king2=false;
	for(int j=0;j<8;j++)
	{
		for(int k=0;k<8;k++)
		{
			if(chess[j][k]=='K')
		    {
	          king2=true;
			  break; 	    	
			}
		}
	}
}

bool check_position(int arr[][2],int size,int row,int col)
{
	for(int j=0;j<size;j++)
	{
	      if(arr[j][0]==row && arr[j][1]==col )
	      {
	          return true;
		  }
	}
}

void game()
{   
    
    int row ,col;
    int i=1;
    char piece;
    while(check_king1()==false || check_king2()==false)
    {
    print_chess();	
    cout<<"K is for king \n"; 
    cout<<"Q is for Queen \n";
    cout<<"R is for Rock \n";
    cout<<"N is for Knight \n";
    cout<<"B is for Bishop \n";
    cout<<"P is for Pawn \n\n";
    cout<<"Player1 should use small alphabets"<<endl;
    cout<<"Player2 should use capital alphabets\n"<<endl;
	
	 
	  
	 if(i%2==0)
	 {
	 	cout<<"Player2's Turn"<<endl;
	 }
	 else
	{
	  cout<<"Player1's Turn"<<endl;
	}
	
	cout<<"Enter charactor for the piece you want to move "<<endl;
	cin>>piece;
	while(i%2==1)
	{
		if(piece=='k' || piece=='p' || piece=='q' || piece=='r' || piece=='b' ||  piece=='n')
		{
			break;
		}
		else
		{
			cout<<"Inappropriate input! Please Enter the lowercase alphabet"<<endl;
			cout<<"Piece: ";
			cin>>piece;
		}
	}
	while(i%2==0)
	{
		if(piece=='K' || piece=='P' || piece=='Q' || piece=='R' || piece=='B' ||  piece=='N')
		{
			break;
		}
		else
		{
			cout<<"Inappropriate input! Please Enter the uppercase alphabet"<<endl;
			cout<<"Piece: ";
			cin>>piece;
		}
	}
	cout<<"Enter Intial position"<<endl;
	cout<<"Row: ";
	cin>>row;
	cout<<"Column: ";
	cin>>col;
	
	if(chess[row][col]!=piece)
	{
		cout<<piece<<" is not at postion"<<endl;
	}
	else if(i%2==1)
	{
		switch(piece)
		{
			case 'k':
				{
					king1(row,col,piece);
					break;
				}
			case 'p':
			{
			    pawn1(row,col,piece)	;
			    break;
			}
			case 'r':
			{
			    rock1 (row,col,piece);
			    break;
			}
			case 'n':
			{
			    knight1 (row,col,piece);
			    break;
			}
			case 'b':
			{
			    bishop1 (row,col,piece);
			    break;
			}
			case 'q':
			{
			    queen1 (row,col);
			    break;
			}	
		}
    }
    else if(i%2==0)
    {
	
		switch(piece)
		{
			case 'K':
				{
					king2(row,col,piece);
					break;
				}
			case 'P':
			{
			    pawn2(row,col,piece)	;
			    break;
			}
			case 'R':
			{
			    rock2 (row,col,piece);
			    break;
			}
			case 'N':
			{
			    knight2 (row,col,piece);
			    break;
			}
			case 'B':
			{
			    bishop2 (row,col,piece);
			    break;
			}
			case 'Q':
			{
			    queen2 (row,col);
			    break;
			}	
		}
		
	}
	chess[row][col]='*';
	cout<<"Enter the Postion you want piece to move"<<endl;
	cout<<"row: ";
	cin>>row;
	cout<<"Col: ";
	cin>>col;
	bool new_position=false;
	
	while(new_position==false)
	{
	
	switch(piece)
		{
			case 'k':
			{
				new_position=check_position(king,8,row,col);
				break;
			}
			case 'p':
			{
			    new_position=check_position(pawn,4,row,col);
			    break;
			}
			case 'r':
			{
			    new_position=check_position(rock,16,row,col);
			    break;
			}
			case 'n':
			{
			    new_position=check_position(knight,8,row,col);
			    break;
			}
			case 'b':
			{
			    new_position=check_position(bishop,16,row,col);
			    break;
			}
			case 'q':
			{
			    new_position=check_position(queen,32,row,col);
			    break;
			}	
			case 'K':
			{
				new_position=check_position(king,8,row,col);
				break;
			}
			case 'P':
			{
			    new_position=check_position(pawn,4,row,col);
			    break;
			}
			case 'R':
			{
			    new_position=check_position(rock,16,row,col);
			    break;
			}
			case 'N':
			{
			    new_position=check_position(knight,8,row,col);
			    break;
			}
			case 'B':
			{
			    new_position=check_position(bishop,8,row,col);
			    break;
			}
			case 'Q':
			{
			    new_position=check_position (queen,32,row,col);
			    break;
			}	
			
		}
		if(new_position==false)
		{
			cout<<"Inappropriate Position ! Please Enter Position again"<<endl;
			cout<<"Row: ";
			cin>>row;
			cout<<"Col: ";
			cin>>col;
		}
    }
	if(new_position== true)
	{
		chess[row][col]=piece;
	}
    i++;
    char conti;
	cout<<"Are you ready to Continue Press 0 "<<endl;
	cin>>conti;
	if(conti=='0')
	{
	  system("cls");	
	}	
}
   if(check_king1()==false && check_king2()==true)
   {
   	 cout<<"Player 1 won"<<endl;
   }
    else if(check_king1()==true && check_king2()==false)
   {
   	 cout<<"Player 1 won"<<endl;
   }
}


void start()
{
     //char chess[8][8];
    // arr_2d(32,2);
	 setup_chess(chess);
	 //chess[3][3]='q';
	 //print_chess(chess);
	 game();
}

int main()
{
	
	start();
	return 0;
}
