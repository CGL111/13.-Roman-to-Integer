# 13.-Roman-to-Integer
罗马数字共有7个，即Ⅰ（1）、Ⅴ（5）、Ⅹ（10）、Ⅼ（50）、Ⅽ（100）、Ⅾ（500）和Ⅿ（1000）
右加左减：
在较大的罗马数字的右边记上较小的罗马数字，表示大数字加小数字。
在较大的罗马数字的左边记上较小的罗马数字，表示大数字减小数字。
就是一个数的右边如果是较大数此数就被减反之被加

算法：遍历字符串比较s[i],s[i-1] 判断加还是减s[i-1]最后加上最后一个值
用了map <键入值，映射值>
