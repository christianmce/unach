df.drop_duplicates(subset='A', keep="last")

   A   B
1  1  20
3  2  40
4  3  10


df.groupby('A', group_keys=False).apply(lambda x: x.loc[x.B.idxmax()])

   A   B
A       
1  1  20
2  2  40
3  3  10

df[['First Name', 'Last Name']] = df['Name'].str.split(' ', expand=True)
print(df)

data = {'Address': ['123 Main St, Anytown, CA, 12345', '456 1st Ave, Anycity, NY, 67890']}
df = pd.DataFrame(data)
df[['Street', 'City', 'State', 'Zip']] = df['Address'].str.split(', ', expand=True)
print(df)
