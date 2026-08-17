class StatisticsCalculator:

    def __init__(self, numbers):
        self.numbers = numbers

    def calculate_mean(self):
        return sum(self.numbers) / len(self.numbers)

    def calculate_median(self):
        sorted_numbers = sorted(self.numbers)
        length = len(sorted_numbers)

        if length % 2 == 0:
            middle1 = sorted_numbers[length // 2 - 1]
            middle2 = sorted_numbers[length // 2]
            return (middle1 + middle2) / 2

        return sorted_numbers[length // 2]

    def calculate_mode(self):
        frequencies = {}

        for number in self.numbers:
            frequencies[number] = frequencies.get(number, 0) + 1

        max_count = max(frequencies.values())
        modes = []

        for number, count in frequencies.items():
            if count == max_count:
                modes.append(number)

        return modes

    def display_results(self):
        print("Python Statistics Calculator")
        print("----------------------------")
        print("Numbers:", self.numbers)
        print(f"Mean: {self.calculate_mean():.2f}")
        print(f"Median: {self.calculate_median():.2f}")

        modes = self.calculate_mode()
        print("Mode(s):", *modes)


numbers = [1, 2, 2, 3, 3, 4, 5, 6]

calculator = StatisticsCalculator(numbers)
calculator.display_results()
