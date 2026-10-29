
def binary_search(nums, target):
    left = 0
    right = len(nums) - 1

    while left <= right:
        mid = (left + right) // 2

        if nums[mid] == target:
            return mid
        elif nums[mid] > target:
            left = mid + 1
        else:
            right = mid - 1

    return -1


nums = [90, 75, 60, 45, 30, 15]
target = 45

print("Index:", binary_search(nums, target))
