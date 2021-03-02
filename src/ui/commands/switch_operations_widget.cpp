/*
 * This file is part of EasyRPG Editor.
 *
 * EasyRPG Editor is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG Editor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyRPG Editor. If not, see <http://www.gnu.org/licenses/>.
 */

#include "switch_operations_widget.h"
#include "ui_switch_operations_widget.h"

SwitchOperationsWidget::SwitchOperationsWidget(ProjectData& project, QWidget *parent) :
	EventCommandBaseWidget(project, parent),
	ui(new Ui::SwitchOperationsWidget) {

	ui->setupUi(this);

	int i = 0;
	for (auto& button : { ui->radioOpOn, ui->radioOpOff, ui->radioOpToggle }) {
		ui->groupOp_arg3->setId(button, i++);
	}
}

SwitchOperationsWidget::~SwitchOperationsWidget() {
	delete ui;
}
