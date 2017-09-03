//
//  Pascal Triangle.swift
//  leetCode
//
//  Created by Neil Wu on 2017/9/3.
//  Copyright © 2017年 Neil Wu. All rights reserved.
//
class Solution {
    var resultArray:[[Int]] = []
    func generate(_ numRows: Int) -> [[Int]] {
        if numRows == 0 {
            return resultArray
        }
        if numRows == 1 {
            resultArray.append([1])
            return resultArray
        }
        return go(numRows)
    }
    
    func go(_ numRows: Int) -> [[Int]] {
        resultArray.append([1])
        
        for i in 2 ... numRows {
            var array:[Int] = [1]
            for j in 1 ..< i {
                if j == i-1 {
                    array.append(1)
                }
                else {
                    array.append(resultArray[i-2][j-1] + resultArray[i-2][j])
                }
            }
            resultArray.append(array)
        }
        
        return resultArray
    }
}
