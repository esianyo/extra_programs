# Python code for data visualization
import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv('C:\\Users\\b.ad\\Downloads\\ebola_2014_2016_clean.csv')

# Convert the 'Date' column to datetime
data['Date'] = pd.to_datetime(data['Date'])

# Group the data by 'Country'
grouped_data = data.groupby('Country')

# Create a single figure to plot all countries
plt.figure()

# Plotting for each country
for country, group in grouped_data:
    plt.plot(group['Date'], group['Cumulative no. of confirmed, probable and suspected cases'], label='Cumulative Cases - {}'.format(country))
    plt.plot(group['Date'], group['Cumulative no. of confirmed, probable and suspected deaths'], label='Cumulative Deaths - {}'.format(country))

plt.xlabel('Date')
plt.ylabel('Count')
plt.title('Ebola Outbreak 2014 to 2016 - Cumulative Cases and Deaths')
plt.legend()
plt.xticks(rotation=45)

plt.show()
