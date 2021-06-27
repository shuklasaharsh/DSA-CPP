const fs = require('fs')
const yargs = require('yargs')
const utils = require('./keeptrackfiles/utils')
yargs.command({
    command: 'cmdadd',
    describe: 'Add a new problem',
    builder: {
        title: {
            describe: "Title of the problem",
            demandOption: false,
            type: 'string'
        },
        link: {
            describe: "URL of the solved problem",
            demandOption: false,
            type: 'string'
        },
        location: {
            describe: "Location of the file",
            demandOption: false,
            type: 'string'
        }
    },
    handler(argv) {
        utils.addProblem(argv.title, argv.link, argv.location)
    }
})

yargs.command({
    command: 'check',
    describe: 'Check if already solved',
    builder: {
        link: {
            describe: "Check if this problem is already solved",
            demandOption: true,
            type: 'string'
        }
    },
    handler(argv) {
        utils.checkProblem(argv.link)
    }
})

yargs.command({
    command: 'list',
    describe: 'List all problems',
    handler(argv) {
        utils.ListProblems(argv)
    }
})

yargs.command({
    command: 'add',
    describe: 'Add command using user inputs',
    handler() {
        utils.addProblemUser()
    }
})

yargs.parse()