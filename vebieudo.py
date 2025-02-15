import matplotlib.pyplot as plt

years = [2000, 2005, 2010, 2015, 2020, 2022, 2023]
gdp = [6.8, 8.4, 6.4, 6.7, 2.9, 8.0, 5.1]

plt.plot(years, gdp, marker='o', linestyle='-', color='blue')
plt.title('Tăng trưởng GDP Việt Nam (2000–2023)')
plt.xlabel('Năm')
plt.ylabel('Tăng trưởng GDP (%)')
plt.grid(True)
plt.show()