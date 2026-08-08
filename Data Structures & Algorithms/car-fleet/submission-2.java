class Solution {
    public int carFleet(int target, int[] position, int[] speed) {
        int n = position.length;
        double[][] cars = new double[n][2];
        for(int i = 0;i <= n-1;i++){
            cars[i][0] = position[i];
            cars[i][1] = speed[i];
        }
        Arrays.sort(cars, (a,b) -> Double.compare(b[0],a[0]));
        int fleetCount = 0;
        double maxTime = 0;
        for(int i = 0;i < n;i++){
            double time = (target - cars[i][0])/(cars[i][1]);

            if(time > maxTime){
                fleetCount++;
                maxTime = time;
            }
        }
        return fleetCount;
    }
}