# c-base-project

Esta es una plantilla de proyecto diseñada para crear un proyecto simple en C
para la cátedra de Sistemas Operativos de la UTN FRBA.

## Dependencias

Para poder compilar y ejecutar el proyecto, es necesario tener instaladas las
siguientes herramientas:

```bash
sudo apt-get install build-essential libreadline-dev
```

Y, además, la biblioteca [so-commons-library] de la cátedra:

```bash
git clone https://github.com/sisoputnfrba/so-commons-library
cd so-commons-library
make install
```

[so-commons-library]: https://github.com/sisoputnfrba/so-commons-library

## Compilación

Para compilar el proyecto, simplemente ejecutar:

```bash
make
```

Se generará un archivo ejecutable con el nombre del proyecto en la carpeta
`bin`, el cual se puede ejecutar con:

```bash
./bin/proyecto
```

## Debug desde Visual Studio Code

Para importar el proyecto en Visual Studio Code, alcanza con abrir la carpeta
del proyecto. Luego, se puede compilar y ejecutar moviéndonos a la pestaña de
"Run and Debug" y seleccionando "run":

![vscode-run-debug](https://github.com/RaniAgus/c-base-project/assets/39303639/0d80ef1f-2726-47d8-bd83-3bd1cb8ed864)

## Contributors

- Agustín Ranieri [@RaniAgus](https://github.com/RaniAgus)
