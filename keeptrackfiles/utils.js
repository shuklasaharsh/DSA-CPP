const fs = require('fs')
const chalk = require('chalk')

let loadData;
loadData = () => {
    try {
        const data = fs.readFileSync('./keeptrackfiles/data.json')
        const dataJSON = data.toString()
        return JSON.parse(dataJSON)

    } catch (e) {
        return []
    }
}

let saveData;
saveData = (notes) => {
    const dataJSON = JSON.stringify(notes)
    fs.writeFileSync('./keeptrackfiles/data.json', dataJSON)
}

let addProblem;
addProblem = (title, link) => {
    const data = loadData()
        // const duplicateNotes = notes.filter((note) => note.title === title)
    const duplicateProblem = data.find((singularData) => singularData.title === title)
    if (!duplicateProblem) {
        data.push({
            title: title,
            link: link
        })
        console.log(chalk.green.inverse("Problem added"))
        saveData(data)
    } else {
        const errorTitleTaken = "errorTitleTaken: This Title is taken, please run again with different title."
        console.log(chalk.red.bold(errorTitleTaken))
    }

}

let checkProblem;
checkProblem = (link) => {
    const data = loadData()
    const duplicateProblem = data.find((singularData) => singularData.link === link)
    if (!duplicateProblem) {
        console.log("This problem has not been solved")
    } else {
        console.log("taken")
    }
}

module.exports = {
    addProblem,
    checkProblem,
    loadData,
    saveData
}