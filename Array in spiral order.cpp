using namespace std;
#include<iostream>

int main()
{
    int a[20][20],row,col,i,j,top=0,bottom,left=0,right,k=1;

    cout<<"\n Enter total number of rows :";
    cin>>row;
    cout<<"\n Enter total number of column :";
    cin>>col;

    right=col-1;
    bottom=row-1;
    for(i=0;i<row;i++)
    {
        cout<<"Enter "<<col<<" element of row "<<i+1<<" :";
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"\n Output:";

    while(top<=bottom || right<=left)
    {
            for(i=left;i<=right;i++)
            {
                cout<<a[top][i]<<",";
            }
            top++;

            for(i=top;i<=bottom;i++)
            {
                cout<<a[i][right]<<",";
            }

            right--;

            for(i=right;i>=left;i--)
            {
                cout<<a[bottom][i]<<",";
            }

            bottom--;

            for(i=bottom;i>=top;i--)
            {
                cout<<a[i][left]<<",";
            }

            left++;

    }
    return 0;
}
