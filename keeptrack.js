const fs = require('fs')
const yargs = require('yargs')
const utils = require('./keeptrackfiles/utils')
yargs.command({
    command: 'add',
    describe: 'Add a new problem',
    builder: {
        title: {
            describe: "Title of the problem",
            demandOption: true,
            type: 'string'
        },
        link: {
            describe: "URL of the solved problem",
            demandOption: true,
            type: 'string'
        },
        location: {
            describe: "Location of the file",
            demandOption: true,
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

yargs.parse()