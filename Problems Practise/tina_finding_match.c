/* Tina owns a match making company, which even to her surprise is an extreme hit. She says that her success rate cannot be matched (Yes, letterplay!) in the entire match-making industry. She follows an extremely simple algorithm to determine if two people are matches for each other. Her algorithm is not at all complex, and makes no sense - not even to her. But she uses it anyway

Let's say say that on a given day she decides to select n people - that is, n boys and n girls. She gets the list of n boys and n girls in a random order initially Then, she arranges the liof girls in ascending order on the basis of their height and boys in descending order of their heights. A girl Ai can be matched to a boy on the same index only, that is, Bi and no one else. Likewise, a girl standing on Ak can be only matched to a boy on the same index Bk and no one

else.

Now to determine if the pair would make an ideal pair, she checks if the modulo of their heights is 0, i.e., Ai % Bi == 0 or Bi % Ai == 0. Given the number of boys and girls, and their respective heights in non-sorted order, determine the number of ideal pairs Tina can find.*/
#include <stdio.h>
void sortD(int arr[],int n){
    int t=0,i,j;
    for(i=0;i<n;i++){ 
        for( j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
}
int main()
{
int t,i,sum=0;
scanf("%d",&t);
while (t!=0){
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr1[i]);
      for(i=0;i<n;i++)
        scanf("%d",&arr2[i]);
    sortD(arr2,n);
    for( i=0;i<n;i++) if(arr1[i]%arr2[i]==0 || arr2[i]%arr1[i]==0)
            sum++;
    printf("%d",sum);
    printf("\n");
    t=t-1;
    sum=0;
}

	return 0;
}