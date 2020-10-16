public class TripletsWithZeroSum {

    public static void main(String[] args) {

        int[] arr = {-1, 2, 3, -2, 1, 0};
        int sum = 0;
        System.out.println(tripletsWithZeroSum(arr, sum));
    }

    static List<List<Integer>> tripletsWithZeroSum(int[] arr, int sum) {

        List<List<Integer>> triplets = new ArrayList<>();

        for (int i = 0; i < arr.length; i++) {
            HashSet<Integer> hashSet = new HashSet<>();
            for (int j = i + 1; j < arr.length; j++) {
                if (hashSet.contains(sum - (arr[i] + arr[j]))) {
                    List<Integer> list = new ArrayList<>();
                    list.add(arr[i]);
                    list.add(arr[j]);
                    list.add(sum - (arr[i] + arr[j]));
                    triplets.add(list);
                } else {
                    hashSet.add(arr[j]);
                }
            }
        }
        return triplets;
    }

}