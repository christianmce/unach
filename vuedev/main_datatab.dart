import 'package:flutter/material.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: const MyHomePage(title: 'Paris Saint-Germain'),
    );
  }
}

class MyHomePage extends StatefulWidget {
  const MyHomePage({super.key, required this.title});

  final String title;

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(widget.title),
      ),
      body: const MyForm1(),
    );
  }
}

class MyForm1 extends StatelessWidget {
  const MyForm1({super.key});

  @override
  Widget build(BuildContext context) {
    return DataTable(
      columns: const <DataColumn>[
        DataColumn(
          label: Expanded(
            child: Text(
              'Nombre',
              style: TextStyle(fontStyle: FontStyle.italic),
            ),
          ),
        ),
        DataColumn(
          label: Expanded(
            child: Text(
              'No.',
              style: TextStyle(fontStyle: FontStyle.italic),
            ),
          ),
        ),
        DataColumn(
          label: Expanded(
            child: Text(
              'Posición',
              style: TextStyle(fontStyle: FontStyle.italic),
            ),
          ),
        ),
      ],
      rows: const <DataRow>[
        DataRow(
          cells: <DataCell>[
            DataCell(Text('Sergio Ramos')),
            DataCell(Text('4')),
            DataCell(Text('Defensa')),
          ],
        ),
        DataRow(
          cells: <DataCell>[
            DataCell(Text('Kylian Mbappé')),
            DataCell(Text('7')),
            DataCell(Text('Delantero')),
          ],
        ),
        DataRow(
          cells: <DataCell>[
            DataCell(Text('Neymar Jr')),
            DataCell(Text('10')),
            DataCell(Text('Delantero')),
          ],
        ),
      ],
    );
  }
}
