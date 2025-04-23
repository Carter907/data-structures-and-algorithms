package com.speers.carter.dsa;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertArrayEquals;

/**
 * Unit test for simple App.
 */
public class AppTest {
    /**
     * Rigorous Test :-)
     */

    @Test
    public void testInsertionSort() {

        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                int[] data = java.util.concurrent.ThreadLocalRandom.current().ints((int)(Math.random() * 100)).toArray();
                int[] data2 = java.util.Arrays.copyOf(data, data.length);
                InsertionSort.sort(data);
                java.util.Arrays.sort(data2);

                assertArrayEquals(data, data2);
            }

        }
    }
}
