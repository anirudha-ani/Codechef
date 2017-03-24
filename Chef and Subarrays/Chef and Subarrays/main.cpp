//
//  main.cpp
//  Chef and Subarrays
//
//  Created by Anirudha Paul on 12/20/15.
//  Copyright © 2015 Anirudha Paul. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
    int case_no,input_no ,i , j , k , l , count , sum = 0 , mul =1 ;
    int data[51];
    int input;
    
    scanf("%d", &case_no);
    
    for (i = 0 ; i < case_no; i++)
    {
        count = 0;
        scanf("%d", &input_no);
        for(j = 0 ; j < input_no ; j++)
        {
            scanf("%d", &input);
            data[j] = input;
        }
        for(k = 1 ; k <= input_no; k++)
        {
            for (l = 0 ; l <input_no  ; l++)
            {
                int take = k;
                int index = l;
                if (index+take <= input_no)
                {
                    while (take >0)
                    {
                        sum+= data[index];
                        mul *= data[index];
                        index++;
                        take--;
                        //cout << "Sum = " << sum << "Mul  =" << mul << endl;
                    }
                }
                
                //cout << "Sum = " << sum << "Mul  =" << mul << endl;
                if(sum == mul )
                    count++ ;
                sum = 0;
                mul = 1;
            }
        }
        printf("%d\n", count);
        
    }
    return 0;
}
