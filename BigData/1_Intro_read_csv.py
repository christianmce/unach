#The easiest way to do this :
import pandas as pd
df = pd.read_csv ('file_name.csv')
print(df)
df = pd.read_csv ('fertilizantes2023.csv',encoding="latin-1")
print(df)

#If you want to import a subset of columns, simply addusecols=['column_name'];
pd.read_csv('file_name.csv', usecols= ['column_name1','column_name2'])

#If you want to use another separator, simply add sep='\t' ; Default separator is ',' .
pd.read_csv('file_name.csv', sep='\t')

#filepath_or_buffer: this is the file name or file path
df.read_csv('file_name.csv’) # relative position
df.read_csv('C:/Users/abc/Desktop/file_name.csv')


#Optional encoding function ---------------------------------------
def read_encoded_csv(csv: str):
    encodings = ['utf-8', 'latin1', 'ascii', 'unicode', 'iso-8859-1', 'utf-16']
    for encoding in encodings:
        try:
            leer_csv = pd.read_csv(csv, encoding=encoding)
        except UnicodeDecodeError:
            continue
        else:
            return leer_csv
            
#Optional detect encoding function ---------------------------------------
import chardet
def detect_encoding(file_path):
    with open(file_path, 'rb') as f:
        result = chardet.detect(f.read())
    return result['encoding']
