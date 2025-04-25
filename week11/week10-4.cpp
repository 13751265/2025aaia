//week10-4.cpp
//leetcode 1399.count largest group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100]={};//硂柑璶totalΩ计(ノㄓ参璸total瞷Ω计)
        int largest =0;//魁程ê竤Τ碭计
        for(int i=1;i<=n;i++){//1..n摸癹伴
            int now=i;//瞷璶ブ计
            int total=0;//癹伴total琌0
            while(now>0){//ブ猭
                //癹伴柑,рtotal癬ㄓ
                total+=now%10;//ブnow%10р–计,total柑
                now=now/10;//ブ,now跑
            }
            a[total]++;//癹伴璶参璸total瞷Ω计
            if(a[total]>largest)largest=a[total];
        }
        int ans=0;
        for(int i=0;i<100;i++){
            if(a[i]==largest)ans++;//狦a[i]琌程计ê竤,碞竤
        }
        return ans;
    }
};
