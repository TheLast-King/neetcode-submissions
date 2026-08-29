class Solution {

    Long distanceSqrd(int[] pt){
            long x = pt[0];
            long y = pt[1];

            return x*x + y*y;
    }

    public int[][] kClosest(int[][] points, int k) {
        PriorityQueue<int []> heapPQ = new PriorityQueue<>((a,b) -> Long.compare(distanceSqrd(b), distanceSqrd(a)));

        for(int[] pt: points){
            heapPQ.offer(pt);
            if(heapPQ.size() > k){
                heapPQ.poll();
            }
        }


        int[][] ans = new int[k][];

        for(int i=0; i < k; i++){
            ans[i] = heapPQ.poll();
        }
        return ans;
    }
}
