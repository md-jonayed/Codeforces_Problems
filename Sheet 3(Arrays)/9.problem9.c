// I. Smallest Pair
// #include <stdio.h>
// int main()
// {
//     int testCases, min;
//     scanf("%d", &testCases);
//     for (int i = 0; i < testCases; i++)
//     {
//         int size;
//         scanf("%d", &size);
//         int a[size];
//         for (int i = 0; i < size; i++)
//         {
//             scanf("%d", &a[i]);
//         }

//         for (int i = 1; i <= size; i++)
//         {
//             for (int j = i + 1; j <= size; j++)
//             {
//                 int result = (a[i - 1] + a[j - 1] + j - i);
//                 if (result <= min)
//                 {
//                     min = result;
//                 }
//                 result = 0;
//             }
//         }
//         printf("%d\n", min);
//     }
// }
#include<stdio.h>
int main()
{
	int testCases,result = 0,flag = 1,min; // 5
	scanf("%d",&testCases);
	while(testCases--){ // 5 4 3 2 1 0
		int size; // 4
		scanf("%d",&size);
		int arr[size]; // arr[4]
		for(int i=0;i<size;i++){ // 0 1 2 3
			scanf("%d",&arr[i]);
		}
		for(int z=1;z<=size;z++){ // (1,2)   (1,3)  (1,4)
			for(int x=z+1;x<=size;x++){
				result = (arr[z-1] + arr[x-1]) + (x-z);
				if(flag == 0 && min > result){
					min = result;
				}
				if(flag){ //1
					min = result;
					flag = 0; // 0
				}
				result = 0;
			}
		}
		flag = 1;
		printf("%d\n",min);
	}

}