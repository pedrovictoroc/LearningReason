# BuckleScript

  Um compilador que transforma reason em código JavaScript

# Como instalar

    yarn global add bs-platform

    Obs: execute npm link bs-platform em seguida

    ou então

    npm install -g bs-platform

# Criando um novo projeto

    1. Ao instalar globalmente o "bsb", temos também um gerador de projeto básico. Para gerar um, use:

        bsb -init my-new-project -theme basic-reason

    2. Para compilar e rodar, use:

        yarn build && node src/Demo.bs.js
    
    Esse comando compila Reason para JavaScript e então executa com Node

    3. Se estiver em ambiente de desenvolvimento, utilize

        yarn start
    
    esse comando executará um watcher que irá recompilar após o arquivo ser alterado

    4. Por padrão os arquivos .JS serão gerados no mesmo local que os originais em Reason, se quiser gerar uma pasta lib com a separação de extensão de arquivos, modifique em bsconfig.json:

        {
            ...
            in-source: false
            ...
        }
    