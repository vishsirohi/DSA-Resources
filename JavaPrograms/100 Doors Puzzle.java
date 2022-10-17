package javaPractise;

public class DoorOpen {

public static void main(String[] args) {
// TODO Auto-generated method stub

int length=101;
int arr[]=new int[length]; // by default all doors are closed . Lets assume

System.out.println(“0 is closed”);
System.out.println(“1 is open”);

for (int i=1;i <length; i++)
{
// System.out.println();

for(int j=i; j<length && j<=100; j=j+i)
{
// Lets revert the condition on each pass , if o(closed) then 1(open) and vice versa
if(arr[j]==0)
{

arr[j]=1; // door is open now
}
else if(arr[j]==1)
{
arr[j]=0; // Door is closed
}
}

}

System.out.println(" The below doors are open");
for (int i=1;i <length; i++)
{
if(arr[i]==1)
{
System.out.println(i);
}
}
}

}
