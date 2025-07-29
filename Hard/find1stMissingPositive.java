package Hard;
import java.util.List;
import java.util.Vector;

public class find1stMissingPositive {
    public static void main(String[] args) {
        Vector<Integer> nums = new Vector<>(List.of(3, 4, -1, 1));
        int size = nums.size();
        Vector<Boolean> flags = new Vector<>();

        // Initialize flags with 'false'
        for (int i = 0; i < size; i++) {
            flags.add(false);
        }

        // Mark presence of valid positive integers
        for (int i = 0; i < size; i++) {
            int x = nums.get(i);
            if (x > 0 && x <= size) {
                flags.set(x - 1, true); // ✅ Use x - 1 as index
            }
        }

        // Find first missing positive
        int count = 0;
        while (count < size && flags.get(count)) {
            count++;
        }

        System.out.println(count + 1); // ✅ Add 1 to get the actual missing number
    }
}