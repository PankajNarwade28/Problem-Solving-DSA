package ARRAY;

public class FindPosition{
    public static void main(String[] args){
        int arr[] ={1,3,5,6},target =5;
        int beg=0,end=3,mid;
        while(beg>end){
            mid=(beg+end)/2;
            if(arr[mid]>target && arr[mid+1]<target){
                System.out.println(mid+1);
            }else if(arr[mid]<target){
                beg=mid;
                System.out.println(mid);
            }else{
                end=mid;
                System.out.println(mid);
            }
        }
    }
}