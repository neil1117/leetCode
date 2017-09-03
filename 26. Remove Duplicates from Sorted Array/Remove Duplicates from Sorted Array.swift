//
//  Remove Duplicates from Sorted Array.swift
//  leetCode swift
//
//  Created by Neil Wu on 2017/9/4.
//  Copyright © 2017年 Neil Wu. All rights reserved.
//

import Foundation
class Solution {
    func removeDuplicates(_ nums: inout [Int]) -> Int {
        
        var index = nums.count
        if index > 1 {
            index = 1
            let n: Int = nums.count
            for i in 1 ..< n {
                if nums[i] != nums[i-1] {
                    nums[index] = nums[i]
                    index += 1
                }
            }
        }
        return index
    }
}
