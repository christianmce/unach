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

# *************************************************************************************************

# *****  df.insert(loc, column, value)  ********

df = pd.DataFrame({'B': [1, 2, 3], 'C': [4, 5, 6]})
Out: 
   B  C
0  1  4
1  2  5
2  3  6

idx = 0
new_col = [7, 8, 9]  # can be a list, a Series, an array or a scalar   
df.insert(loc=idx, column='A', value=new_col)

