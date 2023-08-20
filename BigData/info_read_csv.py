#The easiest way to do this :
import pandas as pd
df = pd.read_csv ('file_name.csv')
print(df)

#If you want to import a subset of columns, simply addusecols=['column_name'];
pd.read_csv('file_name.csv', usecols= ['column_name1','column_name2'])

#If you want to use another separator, simply add sep='\t' ; Default separator is ',' .
pd.read_csv('file_name.csv', sep='\t')

#filepath_or_buffer: this is the file name or file path
df.read_csv('file_name.csv’) # relative position
df.read_csv('C:/Users/abc/Desktop/file_name.csv')
