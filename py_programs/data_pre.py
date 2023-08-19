import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv('C:\\Users\\esianyo\\Desktop\\files\\dli\\Project Work\\ebola_2014_2016_clean.csv')

# Convert the 'Date' column to datetime
data['Date'] = pd.to_datetime(data['Date'])

# Group the data by 'Country'
grouped_data = data.groupby('Country')

# Plotting for each country
for country, group in grouped_data:
    plt.figure()  # Create a new figure for each country
    plt.plot(group['Date'], group['Cumulative no. of confirmed, probable and suspected cases'], label='Cumulative Cases')
    plt.plot(group['Date'], group['Cumulative no. of confirmed, probable and suspected deaths'], label='Cumulative Deaths')
    plt.xlabel('Date')
    plt.ylabel('Count')
    plt.title('Ebola Outbreak 2014 to 2016 - Cumulative Cases and Deaths - {}'.format(country))
    plt.legend()
    plt.xticks(rotation=45)

plt.show()
